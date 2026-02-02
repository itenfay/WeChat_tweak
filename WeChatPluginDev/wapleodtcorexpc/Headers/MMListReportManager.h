//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTListAdapter, NSMutableDictionary;
@protocol MMListReportManagerDelegate;

@interface MMListReportManager : NSObject
{
    id <MMListReportManagerDelegate> _delegate;
    NSMutableDictionary *_exposedSet;
    MMTListAdapter *_adapter;
    double _keyboardHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) __weak MMTListAdapter *adapter; // @synthesize adapter=_adapter;
@property(retain, nonatomic) NSMutableDictionary *exposedSet; // @synthesize exposedSet=_exposedSet;
@property(nonatomic) __weak id <MMListReportManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clearCache;
- (void)tryExposeItem:(id)arg1 inSectionController:(id)arg2 indexPath:(id)arg3;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)listDidDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 sectionController:(id)arg3;
- (id)initWithAdapter:(id)arg1;

@end

