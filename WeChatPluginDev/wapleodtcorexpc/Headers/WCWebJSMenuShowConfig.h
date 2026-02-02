//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface WCWebJSMenuShowConfig
{
    unsigned int _forbigFlag;
    NSArray *_arrMenuItems;
    long long _menuUIStyle;
}

- (void).cxx_destruct;
@property(nonatomic) long long menuUIStyle; // @synthesize menuUIStyle=_menuUIStyle;
@property(retain, nonatomic) NSArray *arrMenuItems; // @synthesize arrMenuItems=_arrMenuItems;
@property(nonatomic) unsigned int forbigFlag; // @synthesize forbigFlag=_forbigFlag;
- (_Bool)isForbigChangeFontSizeMenuButton;
- (_Bool)isForbigSearchInArticleMenuButton;
- (id)init;

@end

