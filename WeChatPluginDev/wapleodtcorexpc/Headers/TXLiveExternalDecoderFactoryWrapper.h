//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TXLiveExternalDecoderFactoryWrapper : NSObject
{
    id _decoderFactory;
}

- (void).cxx_destruct;
- (void)destoryAVCDecoder:(void *)arg1;
- (void *)createAVCDecoder;
- (void)destroyHEVCDecoder:(void *)arg1;
- (void *)createHEVCDecoder;
- (id)initWithDecoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

