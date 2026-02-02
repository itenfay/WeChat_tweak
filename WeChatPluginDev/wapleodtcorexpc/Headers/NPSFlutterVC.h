//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderNPSPlugin, NSString;

@interface NPSFlutterVC
{
    FinderNPSPlugin *_finderNPSPlugin;
    NSString *_tid;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) FinderNPSPlugin *finderNPSPlugin; // @synthesize finderNPSPlugin=_finderNPSPlugin;
- (void)onCloseNPS;
- (void)onClickNPSQuestionBuffer:(id)arg1 answerBuffer:(id)arg2 inputText:(id)arg3 mutliAnswerIDs:(id)arg4;

@end

