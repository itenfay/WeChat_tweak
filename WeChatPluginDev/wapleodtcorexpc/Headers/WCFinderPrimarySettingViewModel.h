//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderContact;

@interface WCFinderPrimarySettingViewModel : NSObject
{
    WCFinderContact *_contact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
- (id)shareSelfCardMessage;
- (void)updateContact:(id)arg1;
- (id)initWithContact:(id)arg1;

@end

