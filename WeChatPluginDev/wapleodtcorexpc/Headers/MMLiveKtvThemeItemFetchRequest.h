//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol MMLiveKtvThemeItemFetching;

@interface MMLiveKtvThemeItemFetchRequest : NSObject
{
    NSString *_themeId;
    id <MMLiveKtvThemeItemFetching> _fetchingProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <MMLiveKtvThemeItemFetching> fetchingProvider; // @synthesize fetchingProvider=_fetchingProvider;
@property(retain, nonatomic) NSString *themeId; // @synthesize themeId=_themeId;

@end

