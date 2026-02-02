//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap;

@interface BTNotifySectionData
{
    unsigned int _notifyCount;
    CMessageWrap *_latestMsgWrap;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int notifyCount; // @synthesize notifyCount=_notifyCount;
@property(retain, nonatomic) CMessageWrap *latestMsgWrap; // @synthesize latestMsgWrap=_latestMsgWrap;
- (unsigned long long)sectionType;
- (double)heightForRowInSection:(unsigned long long)arg1;
@property(readonly, nonatomic) double sectionHeight;
- (long long)numberOfRowsInSection;

@end

