//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCPayBindCardInfo;

@interface WCPayFetchBalanceReport : NSObject
{
    NSString *_reportSessionId;
    WCPayBindCardInfo *_defaultCardBinInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayBindCardInfo *defaultCardBinInfo; // @synthesize defaultCardBinInfo=_defaultCardBinInfo;
@property(retain, nonatomic) NSString *reportSessionId; // @synthesize reportSessionId=_reportSessionId;
- (void)reportActionId:(unsigned int)arg1 cardBinInfo:(id)arg2;
- (id)init;

@end

