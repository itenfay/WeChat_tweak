//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MultiSelectContactsInChatRoomReportOperation : NSObject
{
    unsigned long long _selectionType;
    NSMutableDictionary *_dicSelectionContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicSelectionContact; // @synthesize dicSelectionContact=_dicSelectionContact;
@property(nonatomic) unsigned long long selectionType; // @synthesize selectionType=_selectionType;

@end

