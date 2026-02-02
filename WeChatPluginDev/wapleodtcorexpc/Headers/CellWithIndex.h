//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UITableViewCell;

@interface CellWithIndex : NSObject
{
    UITableViewCell *m_cell;
    long long m_index;
}

- (void).cxx_destruct;
@property(nonatomic) long long m_index; // @synthesize m_index;
@property(retain, nonatomic) UITableViewCell *m_cell; // @synthesize m_cell;
- (id)initWithCell:(id)arg1 andIndex:(long long)arg2;

@end

