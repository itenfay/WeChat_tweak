//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderGeneralJumpH5Model, WCFinderGeneralJumpToastConfig, WCFinderLiteAppParams;

@interface WCFinderGeneralJumpErrMsgModel : NSObject
{
    int _showTimesType;
    long long _showType;
    long long _linkType;
    WCFinderGeneralJumpToastConfig *_toastConfig;
    WCFinderGeneralJumpH5Model *_linkH5;
    WCFinderLiteAppParams *_linkLiteApp;
    NSString *_extInfo;
}

+ (id)fromJSONStr:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int showTimesType; // @synthesize showTimesType=_showTimesType;
@property(copy, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) WCFinderLiteAppParams *linkLiteApp; // @synthesize linkLiteApp=_linkLiteApp;
@property(retain, nonatomic) WCFinderGeneralJumpH5Model *linkH5; // @synthesize linkH5=_linkH5;
@property(retain, nonatomic) WCFinderGeneralJumpToastConfig *toastConfig; // @synthesize toastConfig=_toastConfig;
@property(nonatomic) long long linkType; // @synthesize linkType=_linkType;
@property(nonatomic) long long showType; // @synthesize showType=_showType;

@end

