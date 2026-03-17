//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "FavTagEditViewDelegate-Protocol.h"

@class NSString;

@protocol NewContactTagTableViewDelegate <FavTagEditViewDelegate>
- (void)onDeleteButtonFromTagTableView:(NSString *)arg1;
- (void)onAddButtonFromTagTableView:(NSString *)arg1;
- (void)onCreateNewTagToTagTableView:(NSString *)arg1;
- (void)onEditTags;
@end

