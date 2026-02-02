//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderRedDotCtrlInfo;

@interface MMLiveExtraInfo : NSObject
{
    NSString *_adReportExtrainfoStr;
    WCFinderRedDotCtrlInfo *_reddotCtrlInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *reddotCtrlInfo; // @synthesize reddotCtrlInfo=_reddotCtrlInfo;
@property(retain, nonatomic) NSString *adReportExtrainfoStr; // @synthesize adReportExtrainfoStr=_adReportExtrainfoStr;

@end

