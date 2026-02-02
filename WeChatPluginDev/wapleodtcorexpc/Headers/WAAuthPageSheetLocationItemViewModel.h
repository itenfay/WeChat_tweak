//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAAuthPageSheetLocationItemViewModel : NSObject
{
    _Bool _isSelected;
    NSString *_title;
    long long _index;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 index:(long long)arg2 isSelected:(_Bool)arg3;

@end

