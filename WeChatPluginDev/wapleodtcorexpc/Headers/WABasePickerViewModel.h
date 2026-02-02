//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WABasePickerViewModel : NSObject
{
    NSString *_headerText;
    NSArray *_items;
    NSArray *_currentSelectedIdx;
    double _contentMaxHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double contentMaxHeight; // @synthesize contentMaxHeight=_contentMaxHeight;
@property(retain, nonatomic) NSArray *currentSelectedIdx; // @synthesize currentSelectedIdx=_currentSelectedIdx;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
- (id)titleForRow:(long long)arg1 forComponent:(long long)arg2;
- (id)initWithItems:(id)arg1 currentSelectedIdx:(id)arg2;

@end

