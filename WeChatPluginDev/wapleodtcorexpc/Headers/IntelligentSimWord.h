//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface IntelligentSimWord
{
    unsigned int _searchCount;
    NSString *_word;
    double _confidence;
    NSArray *_arrSimWordClassificationId;
    NSArray *_arrMessage;
    NSArray *_arrSimpleMsg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *arrSimpleMsg; // @synthesize arrSimpleMsg=_arrSimpleMsg;
@property(retain, nonatomic) NSArray *arrMessage; // @synthesize arrMessage=_arrMessage;
@property(nonatomic) unsigned int searchCount; // @synthesize searchCount=_searchCount;
@property(retain, nonatomic) NSArray *arrSimWordClassificationId; // @synthesize arrSimWordClassificationId=_arrSimWordClassificationId;
@property(nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) NSString *word; // @synthesize word=_word;
- (id)description;
- (void)copyFieldFromSimWord:(id)arg1;

@end

