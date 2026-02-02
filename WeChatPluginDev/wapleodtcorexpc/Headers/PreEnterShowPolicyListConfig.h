//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface PreEnterShowPolicyListConfig : NSObject
{
    _Bool _hideclosebtn;
    NSString *_policylist_url;
    NSString *_policylist_list;
    NSString *_policylist_ticket;
    NSString *_deviceid;
    NSString *_doublecheck_content;
    NSString *_doublecheck_cancel;
    NSString *_doublecheck_ok;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hideclosebtn; // @synthesize hideclosebtn=_hideclosebtn;
@property(retain, nonatomic) NSString *doublecheck_ok; // @synthesize doublecheck_ok=_doublecheck_ok;
@property(retain, nonatomic) NSString *doublecheck_cancel; // @synthesize doublecheck_cancel=_doublecheck_cancel;
@property(retain, nonatomic) NSString *doublecheck_content; // @synthesize doublecheck_content=_doublecheck_content;
@property(retain, nonatomic) NSString *deviceid; // @synthesize deviceid=_deviceid;
@property(retain, nonatomic) NSString *policylist_ticket; // @synthesize policylist_ticket=_policylist_ticket;
@property(retain, nonatomic) NSString *policylist_list; // @synthesize policylist_list=_policylist_list;
@property(retain, nonatomic) NSString *policylist_url; // @synthesize policylist_url=_policylist_url;

@end

