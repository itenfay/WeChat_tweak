//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderContact;

@interface WCFinderObjectHighlightInfo : NSObject
{
    WCFinderContact *_contact;
    NSString *_mediaTitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *mediaTitle; // @synthesize mediaTitle=_mediaTitle;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;

@end

