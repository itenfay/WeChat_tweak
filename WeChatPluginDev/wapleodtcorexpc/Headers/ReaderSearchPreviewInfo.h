//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ReaderSearchPreviewInfo : NSObject
{
    _Bool _showHeader;
    double _width;
    double _widthMargin;
    NSString *_searchText;
    NSArray *_arrKeyword;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *arrKeyword; // @synthesize arrKeyword=_arrKeyword;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(nonatomic) double widthMargin; // @synthesize widthMargin=_widthMargin;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) _Bool showHeader; // @synthesize showHeader=_showHeader;

@end

