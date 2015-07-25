//
//  Contact.h
//  Contacts Assistant
//
//  Created by Amay on 7/24/15.
//  Copyright (c) 2015 Beddup. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Event, Relation, Tag;

@interface Contact : NSManagedObject

@property (nonatomic, retain) NSNumber * contactID;
@property (nonatomic, retain) NSString * contactName;
@property (nonatomic, retain) NSNumber * contactIsDeleted;
@property (nonatomic, retain) NSSet *attendWhichEvents;
@property (nonatomic, retain) NSSet *belongWhichRelations;
@property (nonatomic, retain) NSSet *directUnderWhichTags;
@property (nonatomic, retain) NSSet *relationsWithOtherPeople;
@end

@interface Contact (CoreDataGeneratedAccessors)

- (void)addAttendWhichEventsObject:(Event *)value;
- (void)removeAttendWhichEventsObject:(Event *)value;
- (void)addAttendWhichEvents:(NSSet *)values;
- (void)removeAttendWhichEvents:(NSSet *)values;

- (void)addBelongWhichRelationsObject:(Relation *)value;
- (void)removeBelongWhichRelationsObject:(Relation *)value;
- (void)addBelongWhichRelations:(NSSet *)values;
- (void)removeBelongWhichRelations:(NSSet *)values;

- (void)addDirectUnderWhichTagsObject:(Tag *)value;
- (void)removeDirectUnderWhichTagsObject:(Tag *)value;
- (void)addDirectUnderWhichTags:(NSSet *)values;
- (void)removeDirectUnderWhichTags:(NSSet *)values;

- (void)addRelationsWithOtherPeopleObject:(Relation *)value;
- (void)removeRelationsWithOtherPeopleObject:(Relation *)value;
- (void)addRelationsWithOtherPeople:(NSSet *)values;
- (void)removeRelationsWithOtherPeople:(NSSet *)values;

@end
