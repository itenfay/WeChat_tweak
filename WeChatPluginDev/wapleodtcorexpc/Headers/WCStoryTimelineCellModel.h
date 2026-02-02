//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCStoryTimelineCellModel : NSObject
{
    _Bool _isFavour;
    _Bool _hasRead;
    _Bool _isMessageCell;
    NSString *_displayName;
    NSString *_username;
    long long _cornerCount;
    NSArray *_interactiveUsernameArray;
}

+ (id)timelineCellWithContact:(id)arg1 dataItem:(id)arg2;
+ (id)timelineCellWithContact:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *interactiveUsernameArray; // @synthesize interactiveUsernameArray=_interactiveUsernameArray;
@property(nonatomic) long long cornerCount; // @synthesize cornerCount=_cornerCount;
@property(nonatomic) _Bool isMessageCell; // @synthesize isMessageCell=_isMessageCell;
@property(nonatomic) _Bool hasRead; // @synthesize hasRead=_hasRead;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) _Bool isFavour; // @synthesize isFavour=_isFavour;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;

@end

