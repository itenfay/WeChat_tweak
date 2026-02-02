//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface IntelligentClassificationItem
{
    unsigned int _labelId;
    float _score;
    NSString *_labelName;
    NSString *_originLabelId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *originLabelId; // @synthesize originLabelId=_originLabelId;
@property(retain, nonatomic) NSString *labelName; // @synthesize labelName=_labelName;
@property(nonatomic) float score; // @synthesize score=_score;
@property(nonatomic) unsigned int labelId; // @synthesize labelId=_labelId;

@end

