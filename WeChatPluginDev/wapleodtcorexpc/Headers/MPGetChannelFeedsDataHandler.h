//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MPGetChannelFeedsDataHandler : NSObject
{
    CDUnknownBlockType _completion;
    MPGetChannelFeedsDataHandler *_selfRetain;
}

+ (void)sendRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MPGetChannelFeedsDataHandler *selfRetain; // @synthesize selfRetain=_selfRetain;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callbackCompletionIsSuccess:(_Bool)arg1 channelFeedsData:(id)arg2;
- (void)handleChannelchannelFeedsDataResp:(id)arg1;
- (void)sendRequest;
- (void)asyncReleaseSelf;
- (void)dealloc;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

@end

