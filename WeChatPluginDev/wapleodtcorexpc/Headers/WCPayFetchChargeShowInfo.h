//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCPayFetchChargeShowInfoContent;

@interface WCPayFetchChargeShowInfo : NSObject
{
    unsigned int _m_id;
    WCPayFetchChargeShowInfoContent *_show_info;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCPayFetchChargeShowInfoContent *show_info; // @synthesize show_info=_show_info;
@property(nonatomic) unsigned int m_id; // @synthesize m_id=_m_id;
- (void)genFromDic:(id)arg1;

@end

