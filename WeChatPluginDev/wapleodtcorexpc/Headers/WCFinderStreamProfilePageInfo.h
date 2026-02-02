//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, WCFinderCGIProfile;

@interface WCFinderStreamProfilePageInfo : NSObject
{
    _Bool _display;
    Class _pageClass;
    NSArray *_overviewSections;
    NSArray *_overviewCaches;
    CDUnknownBlockType _storeExtInfoAction;
    WCFinderCGIProfile *_cgiProfile;
}

+ (id)pageInfoFor:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderCGIProfile *cgiProfile; // @synthesize cgiProfile=_cgiProfile;
@property(copy, nonatomic) CDUnknownBlockType storeExtInfoAction; // @synthesize storeExtInfoAction=_storeExtInfoAction;
@property(retain, nonatomic) NSArray *overviewCaches; // @synthesize overviewCaches=_overviewCaches;
@property(retain, nonatomic) NSArray *overviewSections; // @synthesize overviewSections=_overviewSections;
@property(nonatomic) _Bool display; // @synthesize display=_display;
@property(retain, nonatomic) Class pageClass; // @synthesize pageClass=_pageClass;

@end

