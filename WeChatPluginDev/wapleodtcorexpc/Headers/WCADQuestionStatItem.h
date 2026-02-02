//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCADQuestionStatItem
{
    unsigned int uiBeginTime;
    unsigned int uiEndTime;
    NSString *nsPublishId;
    NSString *nsExpId;
    NSString *nsUxInfo;
    NSString *nsActionResult;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int uiEndTime; // @synthesize uiEndTime;
@property(nonatomic) unsigned int uiBeginTime; // @synthesize uiBeginTime;
@property(retain, nonatomic) NSString *nsActionResult; // @synthesize nsActionResult;
@property(retain, nonatomic) NSString *nsUxInfo; // @synthesize nsUxInfo;
@property(retain, nonatomic) NSString *nsExpId; // @synthesize nsExpId;
@property(retain, nonatomic) NSString *nsPublishId; // @synthesize nsPublishId;

@end

