//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WASettingAccountModel : NSObject
{
    _Bool _selected;
    NSString *_avatarUrl;
    NSString *_userName;
    NSString *_detail;
    NSMutableArray *_menuItemsArray;
    id _userInfo;
}

+ (id)createWithAvatarUrl:(id)arg1 userName:(id)arg2 detail:(id)arg3 selected:(_Bool)arg4 menuItemsArray:(id)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSMutableArray *menuItemsArray; // @synthesize menuItemsArray=_menuItemsArray;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;

@end

