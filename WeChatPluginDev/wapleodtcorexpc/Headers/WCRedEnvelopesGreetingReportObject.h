//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCRedEnvelopesGreetingReportObject
{
    int _emoticonType;
    unsigned int _changeAmountTimes;
    unsigned int _addSelfieEmoticonTimes;
    unsigned int _addCustomEmoticonTimes;
    unsigned int _addSelfieEmoticonFromBoardTimes;
    NSString *_emoticonMd5;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int addSelfieEmoticonFromBoardTimes; // @synthesize addSelfieEmoticonFromBoardTimes=_addSelfieEmoticonFromBoardTimes;
@property(nonatomic) unsigned int addCustomEmoticonTimes; // @synthesize addCustomEmoticonTimes=_addCustomEmoticonTimes;
@property(nonatomic) unsigned int addSelfieEmoticonTimes; // @synthesize addSelfieEmoticonTimes=_addSelfieEmoticonTimes;
@property(nonatomic) unsigned int changeAmountTimes; // @synthesize changeAmountTimes=_changeAmountTimes;
@property(retain, nonatomic) NSString *emoticonMd5; // @synthesize emoticonMd5=_emoticonMd5;
@property(nonatomic) int emoticonType; // @synthesize emoticonType=_emoticonType;

@end

