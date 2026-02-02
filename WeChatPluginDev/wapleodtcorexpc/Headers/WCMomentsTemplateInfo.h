//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCMomentsTemplateInfo : NSObject
{
    NSString *_type;
    NSString *_subtype;
    NSString *_templateID;
    NSString *_musicID;
    NSString *_AIModelType;
    NSString *_templateIndex;
    NSString *_iOSSDKVersionMin;
    NSString *_AndroidSDKVersionMin;
    unsigned long long _minimumAssetCount;
    unsigned long long _maximumAssetCount;
}

+ (void)initialize;
+ (void)PBArrayAdd_maximumAssetCount;
+ (void)PBArrayAdd_minimumAssetCount;
+ (void)PBArrayAdd_AIModelType;
+ (void)PBArrayAdd_subtype;
+ (void)PBArrayAdd_AndroidSDKVersionMin;
+ (void)PBArrayAdd_iOSSDKVersionMin;
+ (void)PBArrayAdd_musicID;
+ (void)PBArrayAdd_templateID;
+ (void)PBArrayAdd_type;
+ (id)templateInfoWithMJVideoTemplate:(id)arg1 musicID:(id)arg2;
+ (id)templateInfoWithOMJTemplateInfo:(id)arg1 musicID:(id)arg2 templateType:(unsigned long long)arg3;
+ (id)templateInfoWithOMJTemplateInfo:(id)arg1 OMJMusicInfo:(id)arg2 templateType:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long maximumAssetCount; // @synthesize maximumAssetCount=_maximumAssetCount;
@property(nonatomic) unsigned long long minimumAssetCount; // @synthesize minimumAssetCount=_minimumAssetCount;
@property(copy, nonatomic) NSString *AndroidSDKVersionMin; // @synthesize AndroidSDKVersionMin=_AndroidSDKVersionMin;
@property(copy, nonatomic) NSString *iOSSDKVersionMin; // @synthesize iOSSDKVersionMin=_iOSSDKVersionMin;
@property(copy, nonatomic) NSString *templateIndex; // @synthesize templateIndex=_templateIndex;
@property(copy, nonatomic) NSString *AIModelType; // @synthesize AIModelType=_AIModelType;
@property(copy, nonatomic) NSString *musicID; // @synthesize musicID=_musicID;
@property(copy, nonatomic) NSString *templateID; // @synthesize templateID=_templateID;
@property(copy, nonatomic) NSString *subtype; // @synthesize subtype=_subtype;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)getPBPropertyTable;
@property(nonatomic) unsigned long long mjTemplateType;
- (_Bool)isTemplateFromMiaoJian;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

