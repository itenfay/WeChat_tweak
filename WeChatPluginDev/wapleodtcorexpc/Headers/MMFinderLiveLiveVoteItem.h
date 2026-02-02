//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MMFinderLiveLiveVoteItem : NSObject
{
    _Bool _allowMultipleSelection;
    NSString *_question;
    NSMutableArray *_choices;
    unsigned long long _timeLimit;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allowMultipleSelection; // @synthesize allowMultipleSelection=_allowMultipleSelection;
@property(nonatomic) unsigned long long timeLimit; // @synthesize timeLimit=_timeLimit;
@property(retain, nonatomic) NSMutableArray *choices; // @synthesize choices=_choices;
@property(retain, nonatomic) NSString *question; // @synthesize question=_question;

@end

