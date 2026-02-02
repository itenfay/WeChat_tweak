//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface BrandAffMsgExtraData : NSObject
{
    unsigned int _msgType;
    unsigned int _recNativeCardStyle;
    unsigned int _recStyle;
    NSString *_recInfo;
    NSString *_extraData;
    NSString *_reportInfo;
    NSString *_recAccountUsername;
    NSString *_recContentUrl;
    NSString *_reddotReportInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reddotReportInfo; // @synthesize reddotReportInfo=_reddotReportInfo;
@property(retain, nonatomic) NSString *recContentUrl; // @synthesize recContentUrl=_recContentUrl;
@property(nonatomic) unsigned int recStyle; // @synthesize recStyle=_recStyle;
@property(retain, nonatomic) NSString *recAccountUsername; // @synthesize recAccountUsername=_recAccountUsername;
@property(retain, nonatomic) NSString *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(retain, nonatomic) NSString *extraData; // @synthesize extraData=_extraData;
@property(nonatomic) unsigned int recNativeCardStyle; // @synthesize recNativeCardStyle=_recNativeCardStyle;
@property(retain, nonatomic) NSString *recInfo; // @synthesize recInfo=_recInfo;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;

@end

