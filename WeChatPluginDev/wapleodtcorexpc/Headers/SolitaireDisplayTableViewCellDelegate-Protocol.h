//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, SolitaireDisplayTableViewCell, SolitaireItem;

@protocol SolitaireDisplayTableViewCellDelegate <NSObject>
- (_Bool)textViewOfCellForbidEdit:(SolitaireItem *)arg1;
- (void)textViewOfCellHeightDidChanged:(SolitaireDisplayTableViewCell *)arg1 withOriginalText:(NSString *)arg2 andNewText:(NSString *)arg3;
- (void)keyboardOfCellWillAppear:(double)arg1 ofCell:(SolitaireDisplayTableViewCell *)arg2;
- (void)textViewOfCellBeginEditing:(SolitaireDisplayTableViewCell *)arg1;
- (void)textViewOfCellDidEnterNilOfOriginItem:(SolitaireItem *)arg1;
- (void)textOfCellDidChange:(NSString *)arg1 ofOriginItem:(SolitaireItem *)arg2;
@end

