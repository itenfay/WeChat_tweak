//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCFinderDataItem;

@interface TingFinderAudioPlayer
{
    WCFinderDataItem *_fetchedDataItem;
}

+ (id)audioUrlForDataItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderDataItem *fetchedDataItem; // @synthesize fetchedDataItem=_fetchedDataItem;
- (void)onSuccessWithDataItem:(id)arg1;
- (void)prepareToPlay;
- (_Bool)isPlayRateSupported;
- (id)audioInfo;

@end

