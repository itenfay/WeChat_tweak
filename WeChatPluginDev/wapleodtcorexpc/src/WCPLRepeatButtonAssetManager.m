//
// WCPLRepeatButtonAssetManager.m
//

#import "WCPLRepeatButtonAssetManager.h"

#import "WCPLGestureConfig.h"
#import "WCPLLogger.h"

NSString *const kWCPLRepeatButtonAssetDidChangeNotification = @"kWCPLRepeatButtonAssetDidChangeNotification";
NSInteger const kWCPLRepeatButtonAssetSchemaVersionCurrent = 2;

static NSString *const kWCPLRepeatButtonAssetRootRelativePath = @"Library/Application Support/WCPL/RepeatButton";
static CGFloat const kWCPLRepeatButtonImageSourceMaxEdge = 1024.0f;
static NSString *const kWCPLRepeatButtonBackupDataDefaultsKey = @"kWCPLRepeatButtonCustomImageBackupJPEGData";
static NSString *const kWCPLRepeatButtonLegacyPathDefaultsKey = @"kWCPLRepeatButtonCustomImage";

static inline CGSize wcpl_repeatSafeImageSize(CGSize size) {
    CGFloat width = MAX(1.0f, size.width);
    CGFloat height = MAX(1.0f, size.height);
    return CGSizeMake(width, height);
}

static UIImage *wcpl_repeatRenderOpaqueImageFit(UIImage *sourceImage, CGSize targetSize, CGFloat scale) {
    if (![sourceImage isKindOfClass:[UIImage class]]) {
        return nil;
    }

    targetSize = wcpl_repeatSafeImageSize(targetSize);
    scale = MAX(1.0f, scale);

    UIGraphicsBeginImageContextWithOptions(targetSize, YES, scale);
    [[UIColor whiteColor] setFill];
    UIRectFill((CGRect){CGPointZero, targetSize});
    [sourceImage drawInRect:(CGRect){CGPointZero, targetSize}];
    UIImage *output = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return output;
}

static UIImage *wcpl_repeatRenderCircularImageFillSquare(UIImage *sourceImage, CGSize targetSize, CGFloat scale) {
    if (![sourceImage isKindOfClass:[UIImage class]]) {
        return nil;
    }

    targetSize = wcpl_repeatSafeImageSize(targetSize);
    scale = MAX(1.0f, scale);

    CGSize sourceSize = wcpl_repeatSafeImageSize(sourceImage.size);
    CGFloat factor = MAX(targetSize.width / sourceSize.width, targetSize.height / sourceSize.height);
    CGSize drawSize = CGSizeMake(sourceSize.width * factor, sourceSize.height * factor);
    CGRect drawRect = CGRectMake((targetSize.width - drawSize.width) * 0.5f,
                                 (targetSize.height - drawSize.height) * 0.5f,
                                 drawSize.width,
                                 drawSize.height);

    // 目标是圆形按钮图：无论上传图是否为圆形，都从中心裁一张圆图。
    UIGraphicsBeginImageContextWithOptions(targetSize, NO, scale);
    CGRect bounds = (CGRect){CGPointZero, targetSize};
    UIBezierPath *clipPath = [UIBezierPath bezierPathWithOvalInRect:bounds];
    [clipPath addClip];
    [sourceImage drawInRect:drawRect];
    UIImage *output = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return output;
}

@interface WCPLRepeatButtonAssetManager ()

@property (nonatomic, strong) NSCache<NSString *, UIImage *> *imageCache;

@end

@implementation WCPLRepeatButtonAssetManager

+ (instancetype)sharedManager {
    static WCPLRepeatButtonAssetManager *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[self alloc] initPrivate];
    });
    return instance;
}

- (instancetype)init {
    return [self initPrivate];
}

- (instancetype)initPrivate {
    self = [super init];
    if (self) {
        _imageCache = [[NSCache alloc] init];
        _imageCache.countLimit = 24;
    }
    return self;
}

- (NSString *)homeDirectory {
    return NSHomeDirectory() ?: @"";
}

- (NSString *)assetRootDirectory {
    return [[self homeDirectory] stringByAppendingPathComponent:kWCPLRepeatButtonAssetRootRelativePath];
}

- (BOOL)ensureAssetDirectoryExists:(NSError * _Nullable __autoreleasing *)error {
    NSString *directory = [self assetRootDirectory];
    if (directory.length == 0) {
        if (error) {
            *error = [NSError errorWithDomain:@"WCPLRepeatButtonAsset"
                                         code:1001
                                     userInfo:@{NSLocalizedDescriptionKey : @"沙盒目录不可用"}];
        }
        return NO;
    }

    NSFileManager *fileManager = [NSFileManager defaultManager];
    BOOL isDirectory = NO;
    if ([fileManager fileExistsAtPath:directory isDirectory:&isDirectory]) {
        if (isDirectory) {
            return YES;
        }
        [fileManager removeItemAtPath:directory error:nil];
    }

    return [fileManager createDirectoryAtPath:directory
                  withIntermediateDirectories:YES
                                   attributes:nil
                                        error:error];
}

- (NSString *)normalizedRelativePathFromInput:(NSString *)path {
    if (![path isKindOfClass:[NSString class]] || path.length == 0) {
        return nil;
    }

    NSString *trimmed = [path stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    if (trimmed.length == 0) {
        return nil;
    }

    NSString *home = [self homeDirectory];
    NSString *homePrefix = [home stringByAppendingString:@"/"];
    if ([trimmed hasPrefix:homePrefix]) {
        return [trimmed substringFromIndex:homePrefix.length];
    }
    if ([trimmed hasPrefix:@"Library/"]) {
        return trimmed;
    }
    if ([trimmed hasPrefix:@"Application Support/"]) {
        return [@"Library/" stringByAppendingString:trimmed];
    }
    if ([trimmed hasPrefix:@"/"]) {
        return nil;
    }
    return [kWCPLRepeatButtonAssetRootRelativePath stringByAppendingPathComponent:trimmed.lastPathComponent];
}

- (NSString *)absolutePathForRelativePath:(NSString *)relativePath {
    NSString *normalized = [self normalizedRelativePathFromInput:relativePath];
    if (normalized.length == 0) {
        return nil;
    }
    return [[self homeDirectory] stringByAppendingPathComponent:normalized];
}

- (NSString *)originalImageRelativePathForRevision:(NSInteger)revision {
    return [kWCPLRepeatButtonAssetRootRelativePath stringByAppendingPathComponent:[NSString stringWithFormat:@"repeat_original_r%ld.jpg", (long)revision]];
}

- (NSString *)displayImageRelativePathForRevision:(NSInteger)revision
                                       buttonSize:(CGFloat)buttonSize
                                            scale:(CGFloat)scale {
    NSInteger normalizedSize = MAX((NSInteger)16, MIN((NSInteger)30, (NSInteger)llround(buttonSize)));
    NSInteger scaleBucket = (NSInteger)llround(MAX(1.0f, scale));
    NSString *name = [NSString stringWithFormat:@"repeat_display_r%ld_s%ld_x%ld.png",
                      (long)revision,
                      (long)normalizedSize,
                      (long)scaleBucket];
    return [kWCPLRepeatButtonAssetRootRelativePath stringByAppendingPathComponent:name];
}

- (NSString *)cacheKeyForRevision:(NSInteger)revision buttonSize:(CGFloat)buttonSize scale:(CGFloat)scale {
    NSInteger normalizedSize = MAX((NSInteger)16, MIN((NSInteger)30, (NSInteger)llround(buttonSize)));
    NSInteger scaleBucket = (NSInteger)llround(MAX(1.0f, scale));
    return [NSString stringWithFormat:@"r%ld_s%ld_x%ld", (long)revision, (long)normalizedSize, (long)scaleBucket];
}

- (void)removeAssetAtPath:(NSString *)path {
    if (path.length == 0) {
        return;
    }
    [[NSFileManager defaultManager] removeItemAtPath:path error:nil];
}

- (void)cleanupFilesForRevision:(NSInteger)revision keepOriginalFileName:(NSString * _Nullable)keepOriginalFileName {
    NSString *directory = [self assetRootDirectory];
    NSArray<NSString *> *entries = [[NSFileManager defaultManager] contentsOfDirectoryAtPath:directory error:nil];
    if (![entries isKindOfClass:[NSArray class]] || entries.count == 0) {
        return;
    }

    NSString *displayPrefix = [NSString stringWithFormat:@"repeat_display_r%ld_", (long)revision];
    NSString *originalPrefix = [NSString stringWithFormat:@"repeat_original_r%ld", (long)revision];
    for (NSString *entry in entries) {
        if (![entry isKindOfClass:[NSString class]]) {
            continue;
        }
        if ([entry hasPrefix:displayPrefix]) {
            continue;
        }
        if ([entry hasPrefix:originalPrefix] && [entry isEqualToString:keepOriginalFileName]) {
            continue;
        }
        NSString *path = [directory stringByAppendingPathComponent:entry];
        [self removeAssetAtPath:path];
    }
}

- (void)notifyAssetChanged {
    [[NSNotificationCenter defaultCenter] postNotificationName:kWCPLRepeatButtonAssetDidChangeNotification object:nil];
}

- (nullable NSData *)normalizedJPEGDataFromImageData:(NSData *)imageData {
    if (![imageData isKindOfClass:[NSData class]] || imageData.length == 0) {
        return nil;
    }

    UIImage *image = [UIImage imageWithData:imageData];
    if (![image isKindOfClass:[UIImage class]]) {
        return nil;
    }

    CGSize sourceSize = wcpl_repeatSafeImageSize(image.size);
    CGFloat longEdge = MAX(sourceSize.width, sourceSize.height);
    CGFloat shrinkRatio = longEdge > kWCPLRepeatButtonImageSourceMaxEdge ? (kWCPLRepeatButtonImageSourceMaxEdge / longEdge) : 1.0f;
    CGSize normalizedSize = CGSizeMake(floor(sourceSize.width * shrinkRatio), floor(sourceSize.height * shrinkRatio));
    UIImage *normalizedImage = wcpl_repeatRenderOpaqueImageFit(image, normalizedSize, 1.0f);
    if (![normalizedImage isKindOfClass:[UIImage class]]) {
        return nil;
    }

    NSData *normalizedData = UIImageJPEGRepresentation(normalizedImage, 0.92f);
    if (![normalizedData isKindOfClass:[NSData class]] || normalizedData.length == 0) {
        return nil;
    }
    return normalizedData;
}

- (void)saveBackupImageDataToDefaults:(NSData *)imageData {
    if (![imageData isKindOfClass:[NSData class]] || imageData.length == 0) {
        return;
    }

    // 保护上限，避免异常图片写入过大数据到 defaults。
    if (imageData.length > (2 * 1024 * 1024)) {
        WCPLLogWarning(@"Repeat button backup skipped: data too large=%lu", (unsigned long)imageData.length);
        return;
    }

    [[NSUserDefaults standardUserDefaults] setObject:imageData forKey:kWCPLRepeatButtonBackupDataDefaultsKey];
}

- (nullable NSData *)backupImageDataFromDefaults {
    id backupObj = [[NSUserDefaults standardUserDefaults] objectForKey:kWCPLRepeatButtonBackupDataDefaultsKey];
    if (![backupObj isKindOfClass:[NSData class]]) {
        return nil;
    }

    NSData *backupData = (NSData *)backupObj;
    return backupData.length > 0 ? backupData : nil;
}

- (void)clearBackupImageDataFromDefaults {
    [[NSUserDefaults standardUserDefaults] removeObjectForKey:kWCPLRepeatButtonBackupDataDefaultsKey];
}

- (nullable NSData *)legacyImageDataFromDefaults {
    id legacyObj = [[NSUserDefaults standardUserDefaults] objectForKey:kWCPLRepeatButtonLegacyPathDefaultsKey];
    if ([legacyObj isKindOfClass:[NSData class]]) {
        return [self normalizedJPEGDataFromImageData:(NSData *)legacyObj];
    }

    if (![legacyObj isKindOfClass:[NSString class]]) {
        return nil;
    }

    NSString *legacyPath = [(NSString *)legacyObj stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    if (legacyPath.length == 0) {
        return nil;
    }

    NSMutableArray<NSString *> *candidatePaths = [NSMutableArray array];
    NSString *home = [self homeDirectory];
    if ([legacyPath hasPrefix:@"/"]) {
        [candidatePaths addObject:legacyPath];
    } else {
        [candidatePaths addObject:[home stringByAppendingPathComponent:legacyPath]];
        [candidatePaths addObject:[[home stringByAppendingPathComponent:@"Documents"] stringByAppendingPathComponent:legacyPath]];
        [candidatePaths addObject:[[home stringByAppendingPathComponent:@"Library/Caches"] stringByAppendingPathComponent:legacyPath]];
        [candidatePaths addObject:[[home stringByAppendingPathComponent:@"Library/Application Support/WCPL"] stringByAppendingPathComponent:legacyPath]];
        [candidatePaths addObject:[[home stringByAppendingPathComponent:kWCPLRepeatButtonAssetRootRelativePath] stringByAppendingPathComponent:legacyPath]];
    }

    for (NSString *candidatePath in candidatePaths) {
        NSDictionary *attrs = [[NSFileManager defaultManager] attributesOfItemAtPath:candidatePath error:nil];
        NSString *fileType = [attrs fileType];
        unsigned long long fileSize = [attrs fileSize];
        // 自定义图片应很小，避免误读超大文件导致内存暴涨/OOM。
        static const unsigned long long kWCPLRepeatButtonLegacyImageMaxBytes = 10 * 1024 * 1024; // 10MB
        if (![fileType isEqualToString:NSFileTypeRegular] || fileSize == 0 || fileSize > kWCPLRepeatButtonLegacyImageMaxBytes) {
            continue;
        }

        NSError *readError = nil;
        NSData *data = [NSData dataWithContentsOfFile:candidatePath
                                              options:NSDataReadingMappedIfSafe
                                                error:&readError];
        NSData *normalized = [self normalizedJPEGDataFromImageData:data];
        if (normalized.length > 0) {
            WCPLLogInfo(@"Repeat button recovered legacy custom image: %@", candidatePath);
            return normalized;
        }
    }

    return nil;
}

- (BOOL)restoreOriginalImageFromBackupForConfig:(WCPLGestureConfig *)config useExistingRelativePath:(BOOL)useExistingRelativePath {
    if (!config) {
        return NO;
    }

    NSData *backupData = [self backupImageDataFromDefaults];
    if (backupData.length == 0) {
        backupData = [self legacyImageDataFromDefaults];
    }
    if (backupData.length == 0) {
        return NO;
    }

    NSData *normalizedData = [self normalizedJPEGDataFromImageData:backupData];
    if (normalizedData.length == 0) {
        return NO;
    }

    NSInteger revision = MAX((NSInteger)1, config.repeatButtonCustomImageRevision);
    NSString *relativePath = nil;
    if (useExistingRelativePath && config.repeatButtonCustomImageRelativePath.length > 0) {
        relativePath = [self normalizedRelativePathFromInput:config.repeatButtonCustomImageRelativePath];
    }
    if (relativePath.length == 0) {
        revision = (NSInteger)llround([[NSDate date] timeIntervalSince1970] * 1000.0);
        if (revision <= 0) {
            revision = 1;
        }
        relativePath = [self originalImageRelativePathForRevision:revision];
    }

    NSString *absolutePath = [self absolutePathForRelativePath:relativePath];
    if (absolutePath.length == 0) {
        return NO;
    }

    NSError *directoryError = nil;
    if (![self ensureAssetDirectoryExists:&directoryError]) {
        WCPLLogWarning(@"Repeat button restore failed: %@", directoryError.localizedDescription ?: @"dir unavailable");
        return NO;
    }

    NSError *writeError = nil;
    BOOL didWrite = [normalizedData writeToFile:absolutePath options:NSDataWritingAtomic error:&writeError];
    if (!didWrite) {
        WCPLLogWarning(@"Repeat button restore write failed: %@", writeError.localizedDescription ?: @"unknown");
        return NO;
    }

    config.repeatButtonCustomImageRelativePath = relativePath;
    config.repeatButtonCustomImageRevision = revision;
    config.repeatButtonCustomImageSchemaVersion = kWCPLRepeatButtonAssetSchemaVersionCurrent;
    config.repeatButtonCustomImageEnable = YES;
    [self saveBackupImageDataToDefaults:normalizedData];
    [self.imageCache removeAllObjects];

    WCPLLogInfo(@"Repeat button custom image restored from backup: revision=%ld path=%@",
                (long)revision,
                relativePath ?: @"<nil>");
    return YES;
}

- (BOOL)saveCustomButtonImage:(UIImage *)image
                    forConfig:(WCPLGestureConfig *)config
                        error:(NSError * _Nullable __autoreleasing *)error {
    if (![image isKindOfClass:[UIImage class]] || !config) {
        if (error) {
            *error = [NSError errorWithDomain:@"WCPLRepeatButtonAsset"
                                         code:1002
                                     userInfo:@{NSLocalizedDescriptionKey : @"图片数据无效"}];
        }
        return NO;
    }

    [self migrateIfNeededForConfig:config];

    NSError *directoryError = nil;
    if (![self ensureAssetDirectoryExists:&directoryError]) {
        if (error) {
            *error = directoryError;
        }
        return NO;
    }

    CGSize sourceSize = wcpl_repeatSafeImageSize(image.size);
    CGFloat longEdge = MAX(sourceSize.width, sourceSize.height);
    CGFloat shrinkRatio = longEdge > kWCPLRepeatButtonImageSourceMaxEdge ? (kWCPLRepeatButtonImageSourceMaxEdge / longEdge) : 1.0f;
    CGSize normalizedSize = CGSizeMake(floor(sourceSize.width * shrinkRatio), floor(sourceSize.height * shrinkRatio));
    UIImage *normalizedImage = wcpl_repeatRenderOpaqueImageFit(image, normalizedSize, 1.0f);
    if (![normalizedImage isKindOfClass:[UIImage class]]) {
        if (error) {
            *error = [NSError errorWithDomain:@"WCPLRepeatButtonAsset"
                                         code:1003
                                     userInfo:@{NSLocalizedDescriptionKey : @"图片预处理失败"}];
        }
        return NO;
    }

    NSData *originalData = UIImageJPEGRepresentation(normalizedImage, 0.92f);
    if (![originalData isKindOfClass:[NSData class]] || originalData.length == 0) {
        if (error) {
            *error = [NSError errorWithDomain:@"WCPLRepeatButtonAsset"
                                         code:1004
                                     userInfo:@{NSLocalizedDescriptionKey : @"图片编码失败"}];
        }
        return NO;
    }

    NSInteger oldRevision = config.repeatButtonCustomImageRevision;
    NSString *oldRelativePath = config.repeatButtonCustomImageRelativePath;
    NSString *oldAbsolutePath = [self absolutePathForRelativePath:oldRelativePath];

    NSInteger revision = (NSInteger)llround([[NSDate date] timeIntervalSince1970] * 1000.0);
    if (revision <= 0) {
        revision = 1;
    }

    NSString *relativePath = [self originalImageRelativePathForRevision:revision];
    NSString *absolutePath = [self absolutePathForRelativePath:relativePath];
    NSError *writeError = nil;
    BOOL didWrite = [originalData writeToFile:absolutePath options:NSDataWritingAtomic error:&writeError];
    if (!didWrite) {
        if (error) {
            *error = writeError ?: [NSError errorWithDomain:@"WCPLRepeatButtonAsset"
                                                       code:1005
                                                   userInfo:@{NSLocalizedDescriptionKey : @"图片写入失败"}];
        }
        return NO;
    }

    config.repeatButtonCustomImageRelativePath = relativePath;
    config.repeatButtonCustomImageRevision = revision;
    config.repeatButtonCustomImageSchemaVersion = kWCPLRepeatButtonAssetSchemaVersionCurrent;
    config.repeatButtonCustomImageEnable = YES;
    [self saveBackupImageDataToDefaults:originalData];

    if (oldAbsolutePath.length > 0 && ![oldAbsolutePath isEqualToString:absolutePath]) {
        [self removeAssetAtPath:oldAbsolutePath];
    }
    if (oldRevision > 0 && oldRevision != revision) {
        [self cleanupFilesForRevision:revision keepOriginalFileName:absolutePath.lastPathComponent];
    } else {
        [self cleanupFilesForRevision:revision keepOriginalFileName:absolutePath.lastPathComponent];
    }

    [self.imageCache removeAllObjects];
    [self displayImageForConfig:config
                     buttonSize:config.repeatButtonSize
                          scale:[UIScreen mainScreen].scale];
    [self notifyAssetChanged];

    WCPLLogInfo(@"Repeat button custom image saved: revision=%ld path=%@", (long)revision, relativePath);
    return YES;
}

- (nullable UIImage *)displayImageForConfig:(WCPLGestureConfig *)config
                                 buttonSize:(CGFloat)buttonSize
                                      scale:(CGFloat)scale {
    if (!config) {
        return nil;
    }

    if (!config.repeatButtonCustomImageEnable || config.repeatButtonCustomImageRelativePath.length == 0) {
        return nil;
    }

    NSInteger revision = MAX((NSInteger)1, config.repeatButtonCustomImageRevision);
    CGFloat normalizedSize = MAX(16.0f, MIN(30.0f, buttonSize));
    CGFloat normalizedScale = MAX(1.0f, scale);

    NSString *cacheKey = [self cacheKeyForRevision:revision buttonSize:normalizedSize scale:normalizedScale];
    UIImage *cachedImage = [self.imageCache objectForKey:cacheKey];
    if ([cachedImage isKindOfClass:[UIImage class]]) {
        return cachedImage;
    }

    NSError *directoryError = nil;
    if (![self ensureAssetDirectoryExists:&directoryError]) {
        WCPLLogWarning(@"Repeat button image dir unavailable: %@", directoryError.localizedDescription ?: @"unknown");
        return nil;
    }

    NSString *displayRelativePath = [self displayImageRelativePathForRevision:revision
                                                                    buttonSize:normalizedSize
                                                                         scale:normalizedScale];
    NSString *displayAbsolutePath = [self absolutePathForRelativePath:displayRelativePath];

    UIImage *displayImage = [UIImage imageWithContentsOfFile:displayAbsolutePath];
    if (![displayImage isKindOfClass:[UIImage class]]) {
        NSString *originalPath = [self absolutePathForRelativePath:config.repeatButtonCustomImageRelativePath];
        UIImage *originalImage = [UIImage imageWithContentsOfFile:originalPath];
        if (![originalImage isKindOfClass:[UIImage class]]) {
            NSString *beforePath = config.repeatButtonCustomImageRelativePath;
            NSInteger beforeRevision = config.repeatButtonCustomImageRevision;
            BOOL beforeEnable = config.repeatButtonCustomImageEnable;
            [self migrateIfNeededForConfig:config];

            BOOL migrated = (beforeEnable != config.repeatButtonCustomImageEnable) ||
                            (beforeRevision != config.repeatButtonCustomImageRevision) ||
                            ![(beforePath ?: @"") isEqualToString:(config.repeatButtonCustomImageRelativePath ?: @"")];
            if (migrated && config.repeatButtonCustomImageEnable && config.repeatButtonCustomImageRelativePath.length > 0) {
                NSString *migratedOriginalPath = [self absolutePathForRelativePath:config.repeatButtonCustomImageRelativePath];
                originalImage = [UIImage imageWithContentsOfFile:migratedOriginalPath];
            }
            if (![originalImage isKindOfClass:[UIImage class]]) {
                WCPLLogWarning(@"Repeat button custom source missing: %@", config.repeatButtonCustomImageRelativePath ?: @"<nil>");
                return nil;
            }
        }

        UIImage *renderedImage = wcpl_repeatRenderCircularImageFillSquare(originalImage,
                                                                           CGSizeMake(normalizedSize, normalizedSize),
                                                                           normalizedScale);
        if (![renderedImage isKindOfClass:[UIImage class]]) {
            WCPLLogWarning(@"Repeat button custom source render failed");
            return nil;
        }

        NSData *imageData = UIImagePNGRepresentation(renderedImage);
        if (![imageData isKindOfClass:[NSData class]] || imageData.length == 0) {
            WCPLLogWarning(@"Repeat button custom source encode failed");
            return nil;
        }

        NSError *writeError = nil;
        BOOL didWrite = [imageData writeToFile:displayAbsolutePath options:NSDataWritingAtomic error:&writeError];
        if (!didWrite) {
            WCPLLogWarning(@"Repeat button custom display write failed: %@", writeError.localizedDescription ?: @"unknown");
            return nil;
        }
        displayImage = [UIImage imageWithContentsOfFile:displayAbsolutePath];
    }

    if ([displayImage isKindOfClass:[UIImage class]]) {
        [self.imageCache setObject:displayImage forKey:cacheKey];
        return displayImage;
    }

    return nil;
}

- (void)resetCustomButtonImageForConfig:(WCPLGestureConfig *)config {
    if (!config) {
        return;
    }

    NSString *currentOriginalPath = [self absolutePathForRelativePath:config.repeatButtonCustomImageRelativePath];
    NSInteger currentRevision = config.repeatButtonCustomImageRevision;

    config.repeatButtonCustomImageEnable = NO;
    config.repeatButtonCustomImageRelativePath = nil;
    config.repeatButtonCustomImageRevision = 0;
    config.repeatButtonCustomImageSchemaVersion = kWCPLRepeatButtonAssetSchemaVersionCurrent;
    [self clearBackupImageDataFromDefaults];

    [self.imageCache removeAllObjects];
    if (currentOriginalPath.length > 0) {
        [self removeAssetAtPath:currentOriginalPath];
    }

    if (currentRevision > 0) {
        NSString *directory = [self assetRootDirectory];
        NSArray<NSString *> *entries = [[NSFileManager defaultManager] contentsOfDirectoryAtPath:directory error:nil];
        NSString *displayPrefix = [NSString stringWithFormat:@"repeat_display_r%ld_", (long)currentRevision];
        for (NSString *entry in entries) {
            if (![entry hasPrefix:displayPrefix]) {
                continue;
            }
            [self removeAssetAtPath:[directory stringByAppendingPathComponent:entry]];
        }
    }

    [self notifyAssetChanged];
    WCPLLogInfo(@"Repeat button custom image reset");
}

- (void)migrateIfNeededForConfig:(WCPLGestureConfig *)config {
    if (!config) {
        return;
    }

    BOOL changed = NO;
    NSError *directoryError = nil;
    if (![self ensureAssetDirectoryExists:&directoryError]) {
        WCPLLogWarning(@"Repeat button image dir create failed in migration: %@", directoryError.localizedDescription ?: @"unknown");
        return;
    }

    NSString *relativePath = config.repeatButtonCustomImageRelativePath;
    NSString *normalizedRelativePath = [self normalizedRelativePathFromInput:relativePath];
    if (relativePath.length > 0 && normalizedRelativePath.length > 0 && ![relativePath isEqualToString:normalizedRelativePath]) {
        config.repeatButtonCustomImageRelativePath = normalizedRelativePath;
        changed = YES;
    }

    if (config.repeatButtonCustomImageRelativePath.length > 0 && config.repeatButtonCustomImageRevision <= 0) {
        NSInteger fallbackRevision = (NSInteger)llround([[NSDate date] timeIntervalSince1970] * 1000.0);
        config.repeatButtonCustomImageRevision = MAX((NSInteger)1, fallbackRevision);
        changed = YES;
    }

    NSString *absolutePath = [self absolutePathForRelativePath:config.repeatButtonCustomImageRelativePath];
    if (absolutePath.length > 0 && [[absolutePath.pathExtension lowercaseString] isEqualToString:@"png"]) {
        UIImage *legacyImage = [UIImage imageWithContentsOfFile:absolutePath];
        if ([legacyImage isKindOfClass:[UIImage class]]) {
            NSInteger revision = MAX((NSInteger)1, config.repeatButtonCustomImageRevision);
            NSString *newRelativePath = [self originalImageRelativePathForRevision:revision];
            NSString *newAbsolutePath = [self absolutePathForRelativePath:newRelativePath];
            UIImage *normalizedImage = wcpl_repeatRenderOpaqueImageFit(legacyImage, wcpl_repeatSafeImageSize(legacyImage.size), 1.0f);
            NSData *newData = UIImageJPEGRepresentation(normalizedImage, 0.92f);
            if (newData.length > 0 && [newData writeToFile:newAbsolutePath options:NSDataWritingAtomic error:nil]) {
                [self removeAssetAtPath:absolutePath];
                config.repeatButtonCustomImageRelativePath = newRelativePath;
                absolutePath = newAbsolutePath;
                changed = YES;
            }
        }
    }

    if (config.repeatButtonCustomImageRelativePath.length > 0) {
        if (absolutePath.length == 0 || ![[NSFileManager defaultManager] fileExistsAtPath:absolutePath]) {
            BOOL restored = [self restoreOriginalImageFromBackupForConfig:config useExistingRelativePath:YES];
            if (restored) {
                absolutePath = [self absolutePathForRelativePath:config.repeatButtonCustomImageRelativePath];
                changed = YES;
            } else {
                config.repeatButtonCustomImageEnable = NO;
                config.repeatButtonCustomImageRelativePath = nil;
                config.repeatButtonCustomImageRevision = 0;
                changed = YES;
            }
        }
    }

    if (config.repeatButtonCustomImageRelativePath.length == 0) {
        BOOL restored = [self restoreOriginalImageFromBackupForConfig:config useExistingRelativePath:NO];
        if (restored) {
            changed = YES;
        }
    }

    if (config.repeatButtonCustomImageRelativePath.length == 0 && config.repeatButtonCustomImageEnable) {
        config.repeatButtonCustomImageEnable = NO;
        changed = YES;
    }

    if (config.repeatButtonCustomImageSchemaVersion != kWCPLRepeatButtonAssetSchemaVersionCurrent) {
        config.repeatButtonCustomImageSchemaVersion = kWCPLRepeatButtonAssetSchemaVersionCurrent;
        changed = YES;
    }

    if (changed) {
        [self.imageCache removeAllObjects];
    }
}

@end
