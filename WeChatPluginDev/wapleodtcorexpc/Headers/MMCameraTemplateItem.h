//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MMCameraTemplateItem : NSObject
{
    _Bool _isFav;
    _Bool _isFavLatest;
    NSString *_id;
    NSString *_displayName;
    NSString *_authorDisplayName;
    NSString *_authorProfilePicURL;
    unsigned long long _maasIosMinVersion;
    NSString *_templateDescURL;
    unsigned long long _templateDescVersion;
    NSString *_previewImageURL;
    NSData *_sessionBuffer;
}

+ (id)hardCodeJsonData;
+ (id)emptyItem;
+ (id)genTempateItemList;
+ (id)itemFromMJVideoTemplate:(id)arg1;
+ (id)itemFromVideoTemplate:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(copy, nonatomic) NSString *previewImageURL; // @synthesize previewImageURL=_previewImageURL;
@property(nonatomic) unsigned long long templateDescVersion; // @synthesize templateDescVersion=_templateDescVersion;
@property(copy, nonatomic) NSString *templateDescURL; // @synthesize templateDescURL=_templateDescURL;
@property(nonatomic) unsigned long long maasIosMinVersion; // @synthesize maasIosMinVersion=_maasIosMinVersion;
@property(nonatomic) _Bool isFavLatest; // @synthesize isFavLatest=_isFavLatest;
@property(nonatomic) _Bool isFav; // @synthesize isFav=_isFav;
@property(copy, nonatomic) NSString *authorProfilePicURL; // @synthesize authorProfilePicURL=_authorProfilePicURL;
@property(copy, nonatomic) NSString *authorDisplayName; // @synthesize authorDisplayName=_authorDisplayName;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
- (id)description;
- (id)colorString;
- (id)title;
- (_Bool)isEmptyItem;
- (id)finderEventCreateUsrNickname;
- (void)setFinderEventCreateUsrNickname:(id)arg1;
- (id)finderEventName;
- (void)setFinderEventName:(id)arg1;

@end

