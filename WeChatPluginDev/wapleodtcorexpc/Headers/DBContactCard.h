//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DBContactCard : NSObject
{
    NSString *_url;
    NSString *_aeskey;
}

+ (void)initialize;
+ (void)PBArrayAdd_aeskey;
+ (void)PBArrayAdd_url;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *aeskey; // @synthesize aeskey=_aeskey;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

