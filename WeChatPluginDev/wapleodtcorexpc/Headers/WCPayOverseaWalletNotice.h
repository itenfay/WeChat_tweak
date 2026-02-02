//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WCPayOverseaWalletNotice : NSObject
{
    NSData *_conent;
    NSData *_url;
}

+ (void)initialize;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_conent;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *url; // @synthesize url=_url;
@property(retain, nonatomic) NSData *conent; // @synthesize conent=_conent;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

