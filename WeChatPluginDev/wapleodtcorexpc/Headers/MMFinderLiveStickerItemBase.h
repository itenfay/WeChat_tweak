//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveStorageCleanupPinningToken, NSString, UIImage;

@interface MMFinderLiveStickerItemBase : NSObject
{
    _Bool _isStub;
    _Bool _imageArchived;
    NSString *_instanceId;
    unsigned long long _stickerType;
    UIImage *_stickerImage;
    long long _actionSceneOrientation;
    MMLiveStorageCleanupPinningToken *_archiveImagePinningToken;
    struct CGSize _canvasSize;
    struct CGSize _nativeSize;
    struct CGSize _normalizedSize;
    struct CGPoint _normalizedCenter;
    struct CGPoint _normalizedAnchorPoint;
    struct CGAffineTransform _transform;
    struct CGAffineTransformComponents _normalizedTransformComponents;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveStorageCleanupPinningToken *archiveImagePinningToken; // @synthesize archiveImagePinningToken=_archiveImagePinningToken;
@property(nonatomic) long long actionSceneOrientation; // @synthesize actionSceneOrientation=_actionSceneOrientation;
@property(nonatomic) struct CGAffineTransformComponents normalizedTransformComponents; // @synthesize normalizedTransformComponents=_normalizedTransformComponents;
@property(nonatomic) struct CGPoint normalizedAnchorPoint; // @synthesize normalizedAnchorPoint=_normalizedAnchorPoint;
@property(nonatomic) struct CGPoint normalizedCenter; // @synthesize normalizedCenter=_normalizedCenter;
@property(nonatomic) struct CGSize normalizedSize; // @synthesize normalizedSize=_normalizedSize;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(nonatomic) struct CGSize nativeSize; // @synthesize nativeSize=_nativeSize;
@property(nonatomic) struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
@property(retain, nonatomic) UIImage *stickerImage; // @synthesize stickerImage=_stickerImage;
@property(nonatomic) _Bool imageArchived; // @synthesize imageArchived=_imageArchived;
@property(readonly, nonatomic) _Bool isStub; // @synthesize isStub=_isStub;
@property(readonly, nonatomic) unsigned long long stickerType; // @synthesize stickerType=_stickerType;
@property(retain, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
- (id)imageArchivePath;
- (id)imageArchiveFilename;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyAsUniqueInstance;
- (void)loadImageFromArchive;
- (void)archiveImage;
- (id)createReviewSubmissionItem;
- (_Bool)isContentEqualTo:(id)arg1;
@property(readonly, nonatomic) NSObject *stickerAccessibilityDescriptor;
@property(readonly, nonatomic) NSString *submissionId;
- (id)init;
- (id)initWithInstanceId:(id)arg1;

@end

