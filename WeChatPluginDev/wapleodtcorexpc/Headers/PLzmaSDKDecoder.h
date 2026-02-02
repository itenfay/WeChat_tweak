//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol PLzmaSDKDecoderDelegate;

@interface PLzmaSDKDecoder : NSObject
{
    struct SharedPtr<plzma::Decoder> _decoder;
    struct shared_ptr<PLzmaSDKProgressDelegate> _progressDelegate;
    id <PLzmaSDKDecoderDelegate> _delegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak id <PLzmaSDKDecoderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)initWithStream:(id)arg1 fileType:(unsigned char)arg2 andDelegate:(id)arg3;
- (void)setPassword:(id)arg1;
- (_Bool)test;
- (_Bool)testItems:(id)arg1;
- (_Bool)extractItemsToStreams:(id)arg1;
- (_Bool)extractItems:(id)arg1 toPath:(id)arg2 withItemsFullPath:(_Bool)arg3;
- (_Bool)extractToPath:(id)arg1 withItemsFullPath:(_Bool)arg2;
- (id)itemAt:(unsigned int)arg1;
- (void)abort;
- (_Bool)open;
@property(readonly, nonatomic) NSArray *items;
@property(readonly, nonatomic) unsigned int count;
- (void)onCPath:(const char *)arg1 progress:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

