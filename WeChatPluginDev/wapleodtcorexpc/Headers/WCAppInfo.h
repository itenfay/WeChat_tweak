//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAppInfo : NSObject
{
    _Bool _isForceUpdate;
    _Bool _clickable;
    _Bool _isNewMusicStyle;
    _Bool _isHidden;
    NSString *_appID;
    NSString *_appName;
    NSString *_version;
    NSString *_installUrl;
    NSString *_fromUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_isHidden;
+ (void)PBArrayAdd_isNewMusicStyle;
+ (void)PBArrayAdd_clickable;
+ (void)PBArrayAdd_isForceUpdate;
+ (void)PBArrayAdd_fromUrl;
+ (void)PBArrayAdd_installUrl;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_appName;
+ (void)PBArrayAdd_appID;
- (void).cxx_destruct;
@property(nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
@property(nonatomic) _Bool isNewMusicStyle; // @synthesize isNewMusicStyle=_isNewMusicStyle;
@property(nonatomic) _Bool clickable; // @synthesize clickable=_clickable;
@property(nonatomic) _Bool isForceUpdate; // @synthesize isForceUpdate=_isForceUpdate;
@property(retain, nonatomic) NSString *fromUrl; // @synthesize fromUrl=_fromUrl;
@property(retain, nonatomic) NSString *installUrl; // @synthesize installUrl=_installUrl;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

