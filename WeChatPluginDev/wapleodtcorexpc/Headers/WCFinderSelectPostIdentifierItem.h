//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, PrepareFinder, WCFinderContact;

@interface WCFinderSelectPostIdentifierItem : NSObject
{
    _Bool _selected;
    _Bool _hidenMentionView;
    WCFinderContact *_contact;
    PrepareFinder *_prepare;
    NSString *_relatedUsername;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hidenMentionView; // @synthesize hidenMentionView=_hidenMentionView;
@property(copy, nonatomic) NSString *relatedUsername; // @synthesize relatedUsername=_relatedUsername;
@property(retain, nonatomic) PrepareFinder *prepare; // @synthesize prepare=_prepare;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
- (id)checkLabelText;

@end

