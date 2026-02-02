//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJMovieTextSuggestionSeqBuffer, MJMovieTextSuggestionSnapshot, NSData;
@protocol MJMovieTextSuggestionProcessorDelegate;

@interface MJMovieTextSuggestionProcessor : NSObject
{
    _Bool _isLastSnapshotReceivedByServer;
    id <MJMovieTextSuggestionProcessorDelegate> _delegate;
    MJMovieTextSuggestionSeqBuffer *_seqBuffer;
    NSData *_lastBuffer;
    unsigned long long _lastRequestTimeMs;
    unsigned long long _minRequestIntervalLimitMs;
    unsigned long long _lastRequestWordCount;
    unsigned long long _minWordCountChangeForRequest;
    MJMovieTextSuggestionSnapshot *_lastSnapshotInRequest;
}

+ (id)seqBufferInResponse:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isLastSnapshotReceivedByServer; // @synthesize isLastSnapshotReceivedByServer=_isLastSnapshotReceivedByServer;
@property(retain, nonatomic) MJMovieTextSuggestionSnapshot *lastSnapshotInRequest; // @synthesize lastSnapshotInRequest=_lastSnapshotInRequest;
@property(nonatomic) unsigned long long minWordCountChangeForRequest; // @synthesize minWordCountChangeForRequest=_minWordCountChangeForRequest;
@property(nonatomic) unsigned long long lastRequestWordCount; // @synthesize lastRequestWordCount=_lastRequestWordCount;
@property(nonatomic) unsigned long long minRequestIntervalLimitMs; // @synthesize minRequestIntervalLimitMs=_minRequestIntervalLimitMs;
@property(nonatomic) unsigned long long lastRequestTimeMs; // @synthesize lastRequestTimeMs=_lastRequestTimeMs;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) MJMovieTextSuggestionSeqBuffer *seqBuffer; // @synthesize seqBuffer=_seqBuffer;
@property(nonatomic) __weak id <MJMovieTextSuggestionProcessorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resetStatusWithContextIfNeeded:(id)arg1;
- (_Bool)canSendReqeust:(id)arg1 skipWordCountDiffCheck:(_Bool)arg2;
- (_Bool)isLatestResponse:(id)arg1;
- (id)generateNextSeqBuffer;
- (_Bool)requestSuggestionsWithContext:(id)arg1 shouldForceSendRequest:(_Bool)arg2;
- (id)init;

@end

