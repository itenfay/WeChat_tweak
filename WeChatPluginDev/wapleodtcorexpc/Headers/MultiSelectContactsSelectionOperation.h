//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MultiSelectContactsSelectionOperation : NSObject
{
    unsigned long long _selectionType;
    long long _selectionCount;
    long long _selectionFriCount;
}

@property(nonatomic) long long selectionFriCount; // @synthesize selectionFriCount=_selectionFriCount;
@property(nonatomic) long long selectionCount; // @synthesize selectionCount=_selectionCount;
@property(nonatomic) unsigned long long selectionType; // @synthesize selectionType=_selectionType;

@end

