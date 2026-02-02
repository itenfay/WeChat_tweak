//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface MMFinderLivePageSheetNoticeConfig : NSObject
{
    NSString *_title;
    NSString *_content;
    NSMutableArray *_mActions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mActions; // @synthesize mActions=_mActions;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSArray *actions;
- (void)addAction:(id)arg1;

@end

