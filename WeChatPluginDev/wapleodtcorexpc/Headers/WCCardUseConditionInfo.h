//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface WCCardUseConditionInfo
{
    NSString *_title;
    NSArray *_outerTagList;
    NSArray *_innerTagList;
    NSArray *_detailField;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *detailField; // @synthesize detailField=_detailField;
@property(retain, nonatomic) NSArray *innerTagList; // @synthesize innerTagList=_innerTagList;
@property(retain, nonatomic) NSArray *outerTagList; // @synthesize outerTagList=_outerTagList;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

