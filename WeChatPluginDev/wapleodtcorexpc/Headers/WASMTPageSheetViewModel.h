//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface WASMTPageSheetViewModel
{
    NSString *_title;
    long long _backButtonType;
    NSArray *_templeteMessageList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *templeteMessageList; // @synthesize templeteMessageList=_templeteMessageList;
@property(nonatomic) long long backButtonType; // @synthesize backButtonType=_backButtonType;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

