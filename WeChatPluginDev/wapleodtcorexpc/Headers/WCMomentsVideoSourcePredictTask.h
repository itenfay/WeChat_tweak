//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDate, NSNumber, WCDataItem, WCMediaItem;

@interface WCMomentsVideoSourcePredictTask
{
    WCDataItem *_dataItem;
    WCMediaItem *_mediaItem;
    NSNumber *_customPredictionConfidence;
    NSDate *_datetime;
    NSNumber *_positive;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *positive; // @synthesize positive=_positive;
@property(retain, nonatomic) NSDate *datetime; // @synthesize datetime=_datetime;
@property(retain, nonatomic) NSNumber *customPredictionConfidence; // @synthesize customPredictionConfidence=_customPredictionConfidence;
@property(readonly, nonatomic) WCMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(readonly, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)momentsProphetDidPredictWithDataItem:(id)arg1 mediaItem:(id)arg2 positive:(id)arg3;
- (void)main;
- (id)taskID;
- (id)initWithDataItem:(id)arg1 mediaItem:(id)arg2;

@end

