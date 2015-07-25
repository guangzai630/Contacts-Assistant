//
//  Tag.h
//  Contacts Assistant
//
//  Created by Amay on 7/24/15.
//  Copyright (c) 2015 Beddup. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Contact, Tag;

@interface Tag : NSManagedObject

@property (nonatomic, retain) NSNumber * tagID;
@property (nonatomic, retain) NSString * tagName;
@property (nonatomic, retain) NSSet *childrenTags;
@property (nonatomic, retain) NSSet *directlyOwnedContacts;
@property (nonatomic, retain) Tag *parentTag;
@end

@interface Tag (CoreDataGeneratedAccessors)

- (void)addChildrenTagsObject:(Tag *)value;
- (void)removeChildrenTagsObject:(Tag *)value;
- (void)addChildrenTags:(NSSet *)values;
- (void)removeChildrenTags:(NSSet *)values;

- (void)addDirectlyOwnedContactsObject:(Contact *)value;
- (void)removeDirectlyOwnedContactsObject:(Contact *)value;
- (void)addDirectlyOwnedContacts:(NSSet *)values;
- (void)removeDirectlyOwnedContacts:(NSSet *)values;

@end
