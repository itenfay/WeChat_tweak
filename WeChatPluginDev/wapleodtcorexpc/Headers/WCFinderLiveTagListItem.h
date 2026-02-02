//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderLiveTagListItem : NSObject
{
    long long _itemId;
    NSString *_title;
    id _userInfo;
}

+ (id)itemWithItemId:(long long)arg1 title:(id)arg2 userInfo:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long itemId; // @synthesize itemId=_itemId;
- (id)description;
- (_Bool)isEqual:(id)arg1;

@end

