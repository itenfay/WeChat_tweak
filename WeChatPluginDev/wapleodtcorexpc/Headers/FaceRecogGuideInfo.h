//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface FaceRecogGuideInfo
{
    NSString *_guideTitle;
    NSString *_firstStepNumberIconName;
    NSString *_firstStepContent;
    NSString *_firstStepIconName;
    NSString *_secondStepNumberIconName;
    NSString *_secondStepContent;
    NSString *_secondStepIconName;
}

+ (id)genDefaultInfo;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *secondStepIconName; // @synthesize secondStepIconName=_secondStepIconName;
@property(copy, nonatomic) NSString *secondStepContent; // @synthesize secondStepContent=_secondStepContent;
@property(copy, nonatomic) NSString *secondStepNumberIconName; // @synthesize secondStepNumberIconName=_secondStepNumberIconName;
@property(copy, nonatomic) NSString *firstStepIconName; // @synthesize firstStepIconName=_firstStepIconName;
@property(copy, nonatomic) NSString *firstStepContent; // @synthesize firstStepContent=_firstStepContent;
@property(copy, nonatomic) NSString *firstStepNumberIconName; // @synthesize firstStepNumberIconName=_firstStepNumberIconName;
@property(copy, nonatomic) NSString *guideTitle; // @synthesize guideTitle=_guideTitle;

@end

