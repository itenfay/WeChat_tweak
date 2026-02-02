//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface BTFeedbackPanelInitParams : NSObject
{
    NSString *_title;
    NSString *_confirmBtnWording;
    NSArray *_feedbackReasonArr;
    NSObject *_contextInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject *contextInfo; // @synthesize contextInfo=_contextInfo;
@property(retain, nonatomic) NSArray *feedbackReasonArr; // @synthesize feedbackReasonArr=_feedbackReasonArr;
@property(copy, nonatomic) NSString *confirmBtnWording; // @synthesize confirmBtnWording=_confirmBtnWording;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

