//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface FlowListArticleItemData : NSObject
{
    NSString *_contentUrl;
    NSNumber *_itemShowType;
    NSString *_title;
    NSString *_username;
    NSString *_nickname;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithContentUrl:(id)arg1 itemShowType:(id)arg2 title:(id)arg3 username:(id)arg4 nickname:(id)arg5;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber *itemShowType; // @synthesize itemShowType=_itemShowType;
@property(copy, nonatomic) NSString *contentUrl; // @synthesize contentUrl=_contentUrl;
- (id)toList;

@end

