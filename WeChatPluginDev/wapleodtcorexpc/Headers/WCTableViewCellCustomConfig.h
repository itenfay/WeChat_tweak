//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIView;

@interface WCTableViewCellCustomConfig : NSObject
{
    SEL _makeCellSel;
    id _makeCellTarget;
    UIView *_customView;
    long long _accessoryType;
    UIView *_accessoryView;
    NSString *_accessoryLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *accessoryLabel; // @synthesize accessoryLabel=_accessoryLabel;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic) long long accessoryType; // @synthesize accessoryType=_accessoryType;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(nonatomic) __weak id makeCellTarget; // @synthesize makeCellTarget=_makeCellTarget;
@property(nonatomic) SEL makeCellSel; // @synthesize makeCellSel=_makeCellSel;
- (void)addMakeCellTarget:(id)arg1 selector:(SEL)arg2;

@end

