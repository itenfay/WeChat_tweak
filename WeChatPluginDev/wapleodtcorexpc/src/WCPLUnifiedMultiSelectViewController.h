//
// WCPLUnifiedMultiSelectViewController.h
//
// Created by codex on 2026/2/16.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, WCPLUnifiedMultiSelectType) {
    WCPLUnifiedMultiSelectTypeContact = 0,
    WCPLUnifiedMultiSelectTypeChatroom = 1,
};

@interface WCPLUnifiedMultiSelectViewController : UIViewController

- (instancetype)initWithSelectType:(WCPLUnifiedMultiSelectType)selectType
                   initialUserNames:(NSArray<NSString *> *)initialUserNames;

@property (nonatomic, assign, readonly) WCPLUnifiedMultiSelectType selectType;
@property (nonatomic, copy) NSString *titleText;
@property (nonatomic, copy) void (^onDoneBlock)(NSArray<NSString *> *userNames);
@property (nonatomic, copy) dispatch_block_t onCancelBlock;

@end
