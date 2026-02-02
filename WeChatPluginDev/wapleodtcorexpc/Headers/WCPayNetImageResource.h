//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayNetImageResource : NSObject
{
    NSString *_m_url;
    CDUnknownBlockType _m_block;
    NSString *_m_cacheFolder;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_cacheFolder; // @synthesize m_cacheFolder=_m_cacheFolder;
@property(copy, nonatomic) CDUnknownBlockType m_block; // @synthesize m_block=_m_block;
@property(retain, nonatomic) NSString *m_url; // @synthesize m_url=_m_url;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (id)md5ForString:(id)arg1;
- (void)startWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithUrl:(id)arg1 cacheFolder:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

