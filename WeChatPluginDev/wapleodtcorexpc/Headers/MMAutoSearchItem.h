//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMAutoSearchItem
{
    _Bool _startFromFirst;
    NSString *_keyWord;
}

+ (id)itemWithKeyWord:(id)arg1 startFromFirst:(_Bool)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool startFromFirst; // @synthesize startFromFirst=_startFromFirst;
@property(retain, nonatomic) NSString *keyWord; // @synthesize keyWord=_keyWord;

@end

