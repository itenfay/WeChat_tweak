//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveFeedDataLogic, MMFinderLiveFeedTransferInData, MMFinderLiveFeedTransferOutData;

@interface MMFinderLiveFeedTransferLogic : NSObject
{
    _Bool _hasReusedOut;
    MMFinderLiveFeedTransferInData *_in;
    MMFinderLiveFeedTransferOutData *_out;
    MMFinderLiveFeedDataLogic *_context;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMFinderLiveFeedDataLogic *context; // @synthesize context=_context;
@property(retain, nonatomic) MMFinderLiveFeedTransferOutData *out; // @synthesize out=_out;
@property(retain, nonatomic) MMFinderLiveFeedTransferInData *in; // @synthesize in=_in;
@property(nonatomic) _Bool hasReusedOut; // @synthesize hasReusedOut=_hasReusedOut;
- (void)assembleTransferOutData:(id)arg1;
- (void)assembleTransferInData;
- (void)resetTransferOutData;
- (void)resetTransferInData;
- (void)resetTransferData;
- (void)prepareGoBackFeedStream:(id)arg1;
- (void)prepareEnterLive;
- (id)initWithContext:(id)arg1;

@end

